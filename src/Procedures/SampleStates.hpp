#pragma once
#include <KPState.hpp>
#include <Application/Constants.hpp>

namespace SampleStateNames {
	constexpr const char * IDLE		= "sample-state-idle";
	constexpr const char * FLUSH	= "sample-state-flush";
	constexpr const char * SAMPLE	= "sample-state-sample";
	constexpr const char * STOP		= "sample-state-stop";
	constexpr const char * FINISHED = "sample-state-finsihed";
	constexpr const char * PURGE	= "sample-state-purge";
	constexpr const char * SETUP	= "sample-state-setup";
};	// namespace SampleStateNames

class SampleStateIdle : public KPState {
public:
	void enter(KPStateMachine & sm) override;
	unsigned long time = DefaultTimes::IDLE_TIME;
};

class SampleStateFlush : public KPState {
public:
	void enter(KPStateMachine & sm) override;
	unsigned long time = DefaultTimes::FLUSH_TIME;
};

class SampleStateSample : public KPState {
public:
	void enter(KPStateMachine & sm) override;
	void leave(KPStateMachine & sm) override;
	unsigned long time = DefaultTimes::SAMPLE_TIME;
};

class SampleStateStop : public KPState {
public:
	void enter(KPStateMachine & sm) override;
};

class SampleStateFinished : public KPState {
public:
	void enter(KPStateMachine & sm) override;
};

class SampleStatePurge : public KPState {
public:
	void enter(KPStateMachine & sm) override;
	// void leave(KPStateMachine & sm) override;
	unsigned long time = DefaultTimes::PURGE_TIME;
};

class SampleStateSetup : public KPState {
public:
	void enter(KPStateMachine & sm) override;
	unsigned long time = DefaultTimes::SETUP_TIME;
};