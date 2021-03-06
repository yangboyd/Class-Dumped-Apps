//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XPTTraceSection-Protocol.h"

@class NSString, XPTLevel, XPTTracingManagerTracerBackend;
@protocol JavaUtilList;

@interface XPTTracingManagerTracerBackend_Section : NSObject <XPTTraceSection>
{
    XPTTracingManagerTracerBackend *this$0_;
    id lock_;
    id <JavaUtilList> attributes_;
    int id__;
    XPTLevel *level_;
}

- (void)dealloc;
- (id)getAttributes;
- (void)close;
- (void)endAtWithDouble:(double)arg1;
- (void)end;
- (id)annotateWithNSString:(id)arg1 withJavaLangEnum:(id)arg2;
- (id)annotateWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)annotateWithNSString:(id)arg1 withDouble:(double)arg2;
- (id)annotateWithNSString:(id)arg1 withBoolean:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

