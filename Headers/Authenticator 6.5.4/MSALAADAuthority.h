//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSALAuthority.h>

@interface MSALAADAuthority : MSALAuthority
{
}

- (id)url;
- (id)audienceFromType:(long long)arg1 error:(id *)arg2;
- (id)environmentFromCloudInstance:(long long)arg1;
- (id)initWithEnvironment:(id)arg1 audienceType:(long long)arg2 rawTenant:(id)arg3 error:(id *)arg4;
- (id)initWithCloudInstance:(long long)arg1 audienceType:(long long)arg2 rawTenant:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 rawTenant:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

