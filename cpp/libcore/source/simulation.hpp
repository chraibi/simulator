#pragma once

namespace jps
{
class Simulation
{
public:
    /// Constructor
    /// Note: Currently will emit a debug log message to ensure log callbacks can be set and the
    /// emited log message is received in the python wrapper.
    Simulation();
    /// Default destructor
    ~Simulation() = default;
    /// Non-copyable
    Simulation(const Simulation &) = delete;
    /// Non-copyable
    auto operator=(const Simulation &) -> Simulation & = delete;
    /// Non-movable
    Simulation(Simulation &&) = delete;
    /// Non-movable
    auto operator=(Simulation &&) -> Simulation & = delete;
    // NOLINTNEXTLINE
    int getValue() { return 1; }
};

} // namespace jps
