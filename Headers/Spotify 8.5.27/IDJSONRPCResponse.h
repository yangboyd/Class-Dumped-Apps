//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDJSONRPCMessage-Protocol.h"

@class IDJSONRPCRequest, NSError, NSString, NSUUID;

@interface IDJSONRPCResponse : NSObject <IDJSONRPCMessage>
{
    NSString *_version;
    NSUUID *_identifier;
    id _result;
    NSError *_error;
    IDJSONRPCRequest *_request;
}

+ (id)new;
@property(readonly) IDJSONRPCRequest *request; // @synthesize request=_request;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id result; // @synthesize result=_result;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)JSONRepresentation;
- (id)stringRepresentation;
@property(readonly, nonatomic) unsigned long long messageType;
- (id)init;
- (id)initWithVersion:(id)arg1 identifier:(id)arg2 result:(id)arg3 error:(id)arg4;
- (id)initWithJSONRPCString:(id)arg1;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

