//TextureManger header. Handles the storing and drawing of textures.
//Author: Vítor Fortes Rey

#ifndef TEXTURE_MANAGER_H
#define TEXTURE_MANAGER_H

#include "SDL2/SDL.h"

#include <string>
#include <map>

#define TheTextureManger TextureManger::getInstance()


class TextureManger
{
    public:
        // Keep only one reference.
        static TextureManger& getInstance()
        {
            static TextureManger instance;
            return instance;
        }
        
        // Map for laoded textures. id -> texture.
        std::map<std::string, SDL_Texture*> textureMap;

        // Register fileName as id.
        bool load(std::string fileName,
            std::string id,
            SDL_Renderer* ptRenderer);

        
        // Simply draw an image.
        void draw(std::string id,
            int x, int y,
            int width, int height,
            SDL_Renderer* ptRenderer,
            SDL_RendererFlip flip = SDL_FLIP_NONE);
        
        
    private:
        TextureManger() {}                    // Keep private.  
        TextureManger(TextureManger const&);  // Don't Implement.
        void operator=(TextureManger const&); // Don't implement.
 };



#endif /* TEXTURE_MANAGER_H */
