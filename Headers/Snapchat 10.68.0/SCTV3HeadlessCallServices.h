//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3HeadlessCallServices-Protocol.h"

@class NSString;
@protocol SCTV3HeadlessCallServicesDelegate;

@interface SCTV3HeadlessCallServices : NSObject <SCTV3HeadlessCallServices>
{
    id <SCTV3HeadlessCallServicesDelegate> _delegate;
    NSString *_convoId;
}

- (void).cxx_destruct;
- (void)outgoingCallConnectedForConvoId:(id)arg1;
- (void)endCall:(unsigned long long)arg1;
- (id)convoId;
- (id)initWithConvoId:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

