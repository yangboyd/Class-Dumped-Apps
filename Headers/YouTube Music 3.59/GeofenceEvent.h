//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface GeofenceEvent : GPBMessage
{
}

+ (id)descriptor;
+ (id)eventWithPotentialTrigger:(_Bool)arg1 eaten:(_Bool)arg2;

// Remaining properties
@property(nonatomic) _Bool eaten; // @dynamic eaten;
@property(nonatomic) _Bool hasEaten; // @dynamic hasEaten;
@property(nonatomic) _Bool hasIsPotentialTrigger; // @dynamic hasIsPotentialTrigger;
@property(nonatomic) _Bool isPotentialTrigger; // @dynamic isPotentialTrigger;

@end

