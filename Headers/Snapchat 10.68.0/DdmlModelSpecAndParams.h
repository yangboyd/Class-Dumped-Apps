//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class DdmlInstance, DdmlModel;

@interface DdmlModelSpecAndParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInstance; // @dynamic hasInstance;
@property(nonatomic) _Bool hasModel; // @dynamic hasModel;
@property(retain, nonatomic) DdmlInstance *instance; // @dynamic instance;
@property(retain, nonatomic) DdmlModel *model; // @dynamic model;

@end

