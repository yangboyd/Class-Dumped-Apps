//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class ORCH2OrchestrationNodeMetadata, ORCH2OrchestrationWidgetMetadata;

@interface ORCH2PaymentsOrchestrationVisualElementMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOrchestrationNodeMetadata; // @dynamic hasOrchestrationNodeMetadata;
@property(nonatomic) _Bool hasOrchestrationWidgetMetadata; // @dynamic hasOrchestrationWidgetMetadata;
@property(retain, nonatomic) ORCH2OrchestrationNodeMetadata *orchestrationNodeMetadata; // @dynamic orchestrationNodeMetadata;
@property(retain, nonatomic) ORCH2OrchestrationWidgetMetadata *orchestrationWidgetMetadata; // @dynamic orchestrationWidgetMetadata;

@end

