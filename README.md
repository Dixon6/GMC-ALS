# GMC-ALS
## Blueprint version of Advanced Locomotion System port into General Movement Component
## Install Steps
Be sure to have GMC's latest V2 beta build with UE 5.3 in your marketplace plugins / 
[Market Place Link](https://www.unrealengine.com/marketplace/en-US/product/0a128683c41f4b59906c661b95ca8655)
1. Download Zip.
2. Extract "GMC-ALS-Demo" to your projects folder.
3. Launch the .uproject file.
5. Go to the content drawer settings and enable "Show plugin content".
   
The GMC Pawn and Component is found inside "Plugins/ALSReplicatedContent/AdvancedLocomotionV4/Blueprints/CharacterLogic".

____________________________________
**Command line used:**
- Log LogGMCReplication Verbose
- gmc.ShowClientErrors 1
- gmc.ShowClientCorrections 1

### Here are the remaining issues I am trying to fix/implement:
_____________________________________
**Level:**
- Wan't to add moving platforms.
      
**Turn in Place:**
- Need to fix the feet's animation twisting too much.
   
**Ragdoll/Get Up:**
- Ragdoll is now set but still lacks a bit of polish. Using an impulse on the mesh to keep it alligned with the root which can feel a bit unatural right now.
