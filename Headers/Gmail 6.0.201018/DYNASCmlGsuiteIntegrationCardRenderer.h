//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNGsuiteIntegrationCardRenderer-Protocol.h"

@class JSLCmlRenderer, JSLRenderContext, NSString;

@interface DYNASCmlGsuiteIntegrationCardRenderer : NSObject <DYNGsuiteIntegrationCardRenderer>
{
    JSLRenderContext *renderContext_;
    JSLCmlRenderer *cmlRenderer_;
}

+ (void)initialize;
+ (id)cardRendererWithDelegate:(id)arg1;
- (void)dealloc;
- (id)renderFallbackCard;
- (id)renderCalendarCardWithData:(id)arg1 actionHandler:(id)arg2 dateFormatter:(id)arg3 timeFormatter:(id)arg4;
- (id)renderTasksCardWithData:(id)arg1 actionHandler:(id)arg2;
- (id)cmlVisualElementForVisualElementId:(int)arg1 withMessageId:(id)arg2;
- (int)cardTypeForComponent:(id)arg1;
- (void)simulateTapForComponent:(id)arg1 annotation:(id)arg2 delegate:(id)arg3;
- (id)renderFallbackMessageForMessageId:(id)arg1;
- (id)renderGsuiteAnnotation:(id)arg1 messageId:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

