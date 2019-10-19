//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SnapBrainResponse_Results_Sound_Formant, SnapBrainResponse_Results_Sound_Pitch, SnapBrainResponse_Results_Sound_RMSE;

@interface SnapBrainResponse_Results_Sound_Segment : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float duration; // @dynamic duration;
@property(nonatomic) float end; // @dynamic end;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_Formant *formant; // @dynamic formant;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_Pitch *fundamental; // @dynamic fundamental;
@property(nonatomic) _Bool hasFormant; // @dynamic hasFormant;
@property(nonatomic) _Bool hasFundamental; // @dynamic hasFundamental;
@property(nonatomic) _Bool hasPitchClass; // @dynamic hasPitchClass;
@property(nonatomic) _Bool hasPrimary; // @dynamic hasPrimary;
@property(nonatomic) _Bool hasRmse; // @dynamic hasRmse;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_Pitch *pitchClass; // @dynamic pitchClass;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_Pitch *primary; // @dynamic primary;
@property(retain, nonatomic) SnapBrainResponse_Results_Sound_RMSE *rmse; // @dynamic rmse;
@property(nonatomic) float start; // @dynamic start;

@end

