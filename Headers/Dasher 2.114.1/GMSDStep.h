//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class GMSDStepCue, GMSLazyLoader, GMSx_CueMap, GMSx_GMTTDStep, GMSx_StepGroup, GMTTDInspectionView, NSArray, NSAttributedString, NSString;

@interface GMSDStep : NSObject <NSSecureCoding>
{
    struct GMSFeatureID _levelID;
    GMSLazyLoader *_streetViewInfo;
    NSArray *_speedLimitChanges;
    _Bool _namesValidForEntireStep;
    int _travelMode;
    int _maneuverType;
    int _turnType;
    int _turnSide;
    int _sideOfRoad;
    int _headingType;
    int _roundaboutTurnAngle;
    int _stepNumber;
    int _pointIndex;
    int _distanceFromPrevStepMeters;
    int _timeFromPrevStepSeconds;
    long long _distanceUnits;
    double _incomingBearing;
    double _outgoingBearing;
    NSAttributedString *_text;
    GMSDStepCue *_exitNumber;
    GMSDStepCue *_transitSignpost;
    GMSDStepCue *_transitEntranceName;
    GMSDStepCue *_transitExitName;
    GMSx_CueMap *_cueMap;
    NSArray *_notices;
    NSArray *_guidanceEvents;
    NSArray *_laneGuides;
    NSArray *_navigationPopups;
    GMSDStep *_nextStep;
    GMSDStep *_prevStep;
    GMSx_StepGroup *_parentStepGroup;
    GMTTDInspectionView *_inspectionViewProto;
    NSString *_ved;
    GMSx_GMTTDStep *_stepProto;
    struct GMSCoordinate _coordinate;
}

+ (id)propertiesToSkipForSerialization;
+ (_Bool)supportsSecureCoding;
+ (id)syntheticTransitGetOffStepWithCoordinate:(struct GMSCoordinate)arg1 stepNumber:(int)arg2 pointIndex:(int)arg3 instructions:(id)arg4 distanceFromPrevStepMeters:(int)arg5 distanceUnits:(long long)arg6 timeFromPrevStepSeconds:(int)arg7;
+ (id)syntheticDestinationStep;
+ (id)syntheticDepartureStepWithText:(id)arg1;
+ (id)findCuesInText:(id)arg1 cues:(id)arg2;
+ (id)stepCuesWithTactileStepProto:(id)arg1;
+ (id)laneGuidesWithTactileStepProto:(id)arg1;
+ (id)navigationPopupsWithTactileStepProto:(id)arg1;
+ (id)guidanceEventsWithTactileStepProto:(id)arg1;
+ (id)instructionsWithTactileStepProto:(id)arg1;
+ (id)lastStepInChain:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_GMTTDStep *stepProto; // @synthesize stepProto=_stepProto;
@property(readonly, nonatomic) NSString *ved; // @synthesize ved=_ved;
@property(readonly, nonatomic) GMTTDInspectionView *inspectionViewProto; // @synthesize inspectionViewProto=_inspectionViewProto;
@property(nonatomic) __weak GMSx_StepGroup *parentStepGroup; // @synthesize parentStepGroup=_parentStepGroup;
@property(nonatomic) __weak GMSDStep *prevStep; // @synthesize prevStep=_prevStep;
@property(nonatomic) __weak GMSDStep *nextStep; // @synthesize nextStep=_nextStep;
@property(readonly, nonatomic) NSArray *navigationPopups; // @synthesize navigationPopups=_navigationPopups;
@property(readonly, nonatomic) NSArray *laneGuides; // @synthesize laneGuides=_laneGuides;
@property(readonly, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
@property(readonly, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(readonly, nonatomic) GMSx_CueMap *cueMap; // @synthesize cueMap=_cueMap;
@property(readonly, nonatomic) GMSDStepCue *transitExitName; // @synthesize transitExitName=_transitExitName;
@property(readonly, nonatomic) GMSDStepCue *transitEntranceName; // @synthesize transitEntranceName=_transitEntranceName;
@property(readonly, nonatomic) GMSDStepCue *transitSignpost; // @synthesize transitSignpost=_transitSignpost;
@property(readonly, nonatomic) GMSDStepCue *exitNumber; // @synthesize exitNumber=_exitNumber;
@property(readonly, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(readonly, nonatomic) _Bool namesValidForEntireStep; // @synthesize namesValidForEntireStep=_namesValidForEntireStep;
@property(readonly, nonatomic) struct GMSFeatureID levelID; // @synthesize levelID=_levelID;
@property(readonly, nonatomic) double outgoingBearing; // @synthesize outgoingBearing=_outgoingBearing;
@property(readonly, nonatomic) double incomingBearing; // @synthesize incomingBearing=_incomingBearing;
@property(readonly, nonatomic) int timeFromPrevStepSeconds; // @synthesize timeFromPrevStepSeconds=_timeFromPrevStepSeconds;
@property(readonly, nonatomic) long long distanceUnits; // @synthesize distanceUnits=_distanceUnits;
@property(readonly, nonatomic) int distanceFromPrevStepMeters; // @synthesize distanceFromPrevStepMeters=_distanceFromPrevStepMeters;
@property(readonly, nonatomic) int pointIndex; // @synthesize pointIndex=_pointIndex;
@property(readonly, nonatomic) int stepNumber; // @synthesize stepNumber=_stepNumber;
@property(readonly, nonatomic) int roundaboutTurnAngle; // @synthesize roundaboutTurnAngle=_roundaboutTurnAngle;
@property(readonly, nonatomic) int headingType; // @synthesize headingType=_headingType;
@property(readonly, nonatomic) int sideOfRoad; // @synthesize sideOfRoad=_sideOfRoad;
@property(readonly, nonatomic) int turnSide; // @synthesize turnSide=_turnSide;
@property(readonly, nonatomic) int turnType; // @synthesize turnType=_turnType;
@property(readonly, nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property(readonly, nonatomic) struct GMSCoordinate coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) int travelMode; // @synthesize travelMode=_travelMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTextWithString:(id)arg1;
- (id)description;
- (id)stringValue;
- (id)speedLimitChangeAtOffset:(double)arg1;
- (id)speedLimitChangeAtEnd;
- (id)initWithStepProto:(id)arg1 pointIndex:(int)arg2 coordinate:(struct GMSCoordinate)arg3 incomingBearing:(double)arg4 outgoingBearing:(double)arg5 stepNumber:(int)arg6 deltaMeters:(int)arg7 deltaSeconds:(int)arg8 distanceUnits:(long long)arg9;
- (id)initWithTravelMode:(int)arg1 maneuverType:(int)arg2 turnType:(int)arg3 turnSide:(int)arg4 sideOfRoad:(int)arg5 headingType:(int)arg6 roundaboutTurnAngle:(int)arg7 coordinate:(struct GMSCoordinate)arg8 stepNumber:(int)arg9 pointIndex:(int)arg10 distanceFromPrevStepMeters:(int)arg11 distanceUnits:(long long)arg12 timeFromPrevStepSeconds:(int)arg13 incomingBearing:(double)arg14 outgoingBearing:(double)arg15 cues:(id)arg16 instructions:(id)arg17 levelID:(struct GMSFeatureID)arg18 namesValidForEntireStep:(_Bool)arg19 notices:(id)arg20 guidanceEvents:(id)arg21 navigationPopups:(id)arg22 speedLimitChanges:(id)arg23 laneGuides:(id)arg24 inspectionViewProto:(id)arg25 ved:(id)arg26;

@end

