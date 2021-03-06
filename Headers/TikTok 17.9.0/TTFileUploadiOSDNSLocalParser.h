//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTFileUploadiOSDNSProtocol-Protocol.h"

@class NSError, NSString;

@interface TTFileUploadiOSDNSLocalParser : NSObject <TTFileUploadiOSDNSProtocol>
{
    _Bool _isUserCancel;
    _Bool _isSuccess;
    _Bool _isCancelled;
    NSString *_hostname;
    double _timeout;
    long long _maxCount;
    CDUnknownBlockType _result;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) _Bool isUserCancel; // @synthesize isUserCancel=_isUserCancel;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (void)_resetInitialStates;
- (id)parseResult:(id)arg1;
- (void)parseDNS;
- (void)notifySuccess:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (long long)parserType;
- (_Bool)cancelled;
- (void)cancel;
- (id)host;
- (id)initWithHost:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

