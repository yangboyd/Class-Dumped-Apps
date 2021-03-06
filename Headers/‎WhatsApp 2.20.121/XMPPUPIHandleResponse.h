//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAPaymentUPIHandle, WAUserJID;

@interface XMPPUPIHandleResponse : NSObject
{
    WAUserJID *_jid;
    NSString *_fbHandleId;
    WAPaymentUPIHandle *_handle;
    NSString *_nodal;
    NSString *_nodalAllowed;
    NSString *_notifAllowed;
}

+ (id)responseFromStanza:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *notifAllowed; // @synthesize notifAllowed=_notifAllowed;
@property(copy, nonatomic) NSString *nodalAllowed; // @synthesize nodalAllowed=_nodalAllowed;
@property(copy, nonatomic) NSString *nodal; // @synthesize nodal=_nodal;
@property(copy, nonatomic) WAPaymentUPIHandle *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSString *fbHandleId; // @synthesize fbHandleId=_fbHandleId;
@property(retain, nonatomic) WAUserJID *jid; // @synthesize jid=_jid;
- (id)description;

@end

