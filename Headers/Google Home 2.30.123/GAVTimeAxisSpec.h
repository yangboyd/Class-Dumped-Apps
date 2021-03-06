//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVAxisSpec.h"

#import "GAVTimeAxisSpec-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol GAVAxisStyle, GAVExtent, GAVTickFormatter, GAVTickProvider;

@interface GAVTimeAxisSpec : GAVAxisSpec <GAVTimeAxisSpec>
{
    NSString *_type;
    NSArray *_timeStepperTypes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *timeStepperTypes; // @synthesize timeStepperTypes=_timeStepperTypes;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) int orientation;
@property(retain, nonatomic) id <GAVAxisStyle> style;
@property(readonly, nonatomic) NSMutableArray *styleRules;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <GAVTickFormatter> tickFormatter;
@property(retain, nonatomic) id <GAVTickProvider> tickProvider;
@property(retain, nonatomic) id <GAVExtent> viewportExtent;

@end

