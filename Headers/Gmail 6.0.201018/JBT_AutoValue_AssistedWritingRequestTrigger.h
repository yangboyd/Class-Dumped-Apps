//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTAssistedWritingRequestTrigger.h"

@class JBTAssistedWritingRequestTrigger_BreakType, JBTAssistedWritingRequestTrigger_EventType;

@interface JBT_AutoValue_AssistedWritingRequestTrigger : JBTAssistedWritingRequestTrigger
{
    JBTAssistedWritingRequestTrigger_EventType *eventType_;
    JBTAssistedWritingRequestTrigger_BreakType *breakType_;
    _Bool endOfLine_;
}

- (void)dealloc;
- (_Bool)endOfLine;
- (id)breakType;
- (id)eventType;

@end

