//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGNetworkRequest.h>

@class NSString;
@protocol IBGUserAttributesNetworkRequestDelegate;

@interface IBGUserAttributesNetworkRequest : IBGNetworkRequest
{
    id <IBGUserAttributesNetworkRequestDelegate> _delegate;
    NSString *_currentUUID;
}

@property(copy, nonatomic) NSString *currentUUID; // @synthesize currentUUID=_currentUUID;
@property(nonatomic) __weak id <IBGUserAttributesNetworkRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkDone:(id)arg1 URLSessionDataTask:(id)arg2 response:(id)arg3 error:(id)arg4 responseDictionary:(id)arg5;
- (_Bool)shouldAutomaticallyReload;
- (id)requestCreator;

@end

