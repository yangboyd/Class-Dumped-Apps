//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSString;

@interface TFSTwitterAPIOAuthRequestTokenCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _jsonResponse;
    _Bool _scopePolicyInResponse;
    NSString *_sourceAppID;
}

@property(copy, nonatomic) NSString *sourceAppID; // @synthesize sourceAppID=_sourceAppID;
@property(nonatomic, getter=isScopePolicyInResponse) _Bool scopePolicyInResponse; // @synthesize scopePolicyInResponse=_scopePolicyInResponse;
@property(nonatomic, getter=isJsonResponse) _Bool jsonResponse; // @synthesize jsonResponse=_jsonResponse;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 jsonResponse:(_Bool)arg4 scopePolicyInResponse:(_Bool)arg5 sourceAppID:(id)arg6 source:(unsigned long long)arg7 responseModelBuilder:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end

