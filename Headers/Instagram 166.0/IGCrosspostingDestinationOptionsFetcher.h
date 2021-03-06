//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFacebookHelper, IGGraphQLService, IGUserSession, NSArray;

@interface IGCrosspostingDestinationOptionsFetcher : NSObject
{
    IGUserSession *_userSession;
    IGGraphQLService *_graphQLService;
    IGFacebookHelper *_facebookHelper;
    NSArray *_cachedDestinationOptions;
}

- (void).cxx_destruct;
- (void)fetchCrosspostingDestinationOptionsWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 onInvalidToken:(CDUnknownBlockType)arg3 surface:(id)arg4;
- (_Bool)_tokenIsInvalid:(id)arg1;
- (id)cachedCrosspostingDestinationOptions;
- (id)initWithUserSession:(id)arg1 facebookHelper:(id)arg2;

@end

