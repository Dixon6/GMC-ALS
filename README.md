# GMC-ALS
## Install Steps
1 Download Zip
2 Extract
3
4


## ALS port into General Movement Component

**Command line used:**
- Log LogGMCReplication Verbose
- gmc.ShowClientErrors 1
- gmc.ShowClientCorrections 1

### _Here are the remiaining issues I am trying to fix:_
____________________________________
- Did not mess with the Simulation Mode/Interpolation yet. Kept the default settings for bindings in most cases. Might be able to disable some to save bandwith.

- Compressed double precission Float[0] (Aim Yaw Rate) errors in the log very occasionally.

**Change Overlay:**
- "Overlay State" is client auth. Might want to rework for your specific project to be server auth.

**Mantle:**
- Blend in missing (Can be found in "Mantle Update" function, step 3's last lerp transform.)
- Mantle anim gets offset a bunch with high ping.

**Roll:**
- Compressed Vector[3] (Acceleration) sometimes replay in the log when having some movement input in a different direction while rolling.
- Roll animation starts hitching or does not play on a host/standalone with FPS above 90
- Roll animation looks slightly jittery from a simulated pawn view.
  
**Ragdoll/Get Up:**
- Complete rework (Deactivated for now)
