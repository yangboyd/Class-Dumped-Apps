//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDJSONRPCMessage-Protocol.h"

@class NSDictionary, NSString;

@interface IDJSONRPCNotification : NSObject <IDJSONRPCMessage>
{
    NSString *_version;
    NSString *_method;
    NSDictionary *_parameters;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy) NSString *method; // @synthesize method=_method;
@property(readonly, copy) NSString *version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (id)JSONRepresentation;
- (id)stringRepresentation;
@property(readonly, nonatomic) unsigned long long messageType;
- (id)init;
- (id)initWithVersion:(id)arg1 method:(id)arg2 parameters:(id)arg3;
- (id)initWithJSONRPCString:(id)arg1;
- (id)initWithMethod:(id)arg1 parameters:(id)arg2;
- (id)initWithMethod:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

