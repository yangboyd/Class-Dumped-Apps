//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFNetworkBaseRequest.h>

@class NSNumber;

@interface IFSavePreferencesRequest : IFNetworkBaseRequest
{
    NSNumber *_denySMS;
    NSNumber *_denyEmail;
    NSNumber *_acceptedTOS;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *acceptedTOS; // @synthesize acceptedTOS=_acceptedTOS;
@property(retain, nonatomic) NSNumber *denyEmail; // @synthesize denyEmail=_denyEmail;
@property(retain, nonatomic) NSNumber *denySMS; // @synthesize denySMS=_denySMS;
- (id)parameters;
- (id)responseMapper;
- (Class)responseClass;
- (id)path;
- (long long)httpMethod;
- (id)initDenySMS:(id)arg1 denyEmail:(id)arg2 acceptedTOS:(id)arg3;

@end

