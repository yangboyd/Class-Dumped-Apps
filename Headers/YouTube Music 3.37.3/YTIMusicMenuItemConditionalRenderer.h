//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMConditionalRendererProtocol-Protocol.h"

@class NSMutableArray, NSString, YTIMusicConditionVariables;

@interface YTIMusicMenuItemConditionalRenderer : GPBMessage <YTMConditionalRendererProtocol>
{
}

+ (id)descriptor;
- (id)ytm_evaluateWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasInputs; // @dynamic hasInputs;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIMusicConditionVariables *inputs; // @dynamic inputs;
@property(retain, nonatomic) NSMutableArray *selectorsArray; // @dynamic selectorsArray;
@property(readonly, nonatomic) unsigned long long selectorsArray_Count; // @dynamic selectorsArray_Count;
@property(readonly) Class superclass;

@end

