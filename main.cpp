#include <iostream>
#include "ai_engine.cpp"
#include "npc_behavior.cpp"
#include "emotion_core.cpp"
#include "economy_sim.cpp"
#include "relationship_system.cpp"
#include "government_system.cpp"
#include "destiny_engine.cpp"
#include "space_expansion.cpp"
#include "dream_system.cpp"
#include "voice_module.cpp"
#include "housing_simulation.cpp"
#include "multiplayer_portal.cpp"
#include "timeline_tracker.cpp"

int main() {
    std::cout << "🚀 Metamorph Immortal Engine Booting...\n";

    initNPCBrains();
    simulateEmotionLoop();
    generateCareerPaths();
    evolveDestinies();
    updateRelationshipMatrix();
    simulateGovernment();
    expandToNewPlanets();
    simulateDreams();
    initVoiceAI();
    manageHousing();
    launchMultiplayer();
    runTimelineSystem();

    std::cout << "🌍 World Alive. Begin your simulation...\n";
    return 0;
}
