#ifndef UINPUT_H
#define UINPUT_H

#include "UObject.h"

#include <functional>
#include <map>

#include<SDL2\sdl.h>

class UInput : public UObject
{
    public:
        UInput();
        virtual ~UInput();

        getKeyboardInput();
          using EventCallback = std::function<void(SDL_Event const&)>;

          void register(SDL_EventType type, EventCallback callback) {
            _registeredCallbacks[type].push_back(callback);
          }

          void handleEvents() {
            SDL_Event event;
            while (SDL_PollEvent(&event) != 0) {
              for (auto& cb : _registeredCallbacks[event.type]) {
                cb(event);
              }
            }
          }

    private:
        std::map<SDL_EventType, std::vector<EventCallback>> _registeredCallbacks;

    protected:

    private:
};

#endif // UINPUT_H
