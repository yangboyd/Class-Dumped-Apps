//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface FBCCGestureGatingConfiguration : NSObject
{
    NSMapTable *_tracking;
    NSMapTable *_gatingForClasses;
    NSMapTable *_failureRequirements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *failureRequirements; // @synthesize failureRequirements=_failureRequirements;
@property(retain, nonatomic) NSMapTable *gatingForClasses; // @synthesize gatingForClasses=_gatingForClasses;
@property(retain, nonatomic) NSMapTable *tracking; // @synthesize tracking=_tracking;

@end

