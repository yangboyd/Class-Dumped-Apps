//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/ACTEventBase.h>

@class NSString;

@interface ACTTraceMessage : ACTEventBase
{
    int level;
    NSString *message;
}

- (void).cxx_destruct;
- (void)populateSemanticProperties:(id)arg1;
- (id)initWithLevel:(int)arg1 message:(id)arg2 eventProperties:(id)arg3;

@end

