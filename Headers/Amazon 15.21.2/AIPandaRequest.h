//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIBackendRequest.h"

@interface AIPandaRequest : AIBackendRequest
{
}

+ (id)createPandaRequestHeaderWithDomain:(id)arg1;
- (void)configureRequestHeaderWithDomain:(id)arg1;
- (id)pandaDomain;
- (id)createURL;
- (id)initWithDomain:(id)arg1 HTTPMethod:(id)arg2;

@end

