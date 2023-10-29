# GMC-ALS
## Blueprint version of Advanced Locomotion System port into General Movement Component
## Install Steps
Be sure to have GMC's latest V2 beta build with UE 5.3 in your marketplace plugins
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

### Here are the remaining issues I am trying to fix:
_____________________________________
- Did not mess with the Simulation Mode/Interpolation yet. Kept the default settings for bindings in most cases. Might be able to disable some to save bandwidth.
- Compressed double precision Float[0] (Aim Yaw Rate) errors in the log very occasionally.
   
**Mantle:**
- Blend in missing (Can be found in "Mantle Update" function, step 3's last lerp transform.).
      
**Roll:**
- Compressed Vector[3] (Acceleration) sometimes replay in the log when having some movement input in a different direction while rolling.

**Turn In Place**
- Animation does not match very well with the turn in place right now. Will need to tweak a bit.
   
**Ragdoll/Get Up:**
- Complete rework (Deactivated for now)
