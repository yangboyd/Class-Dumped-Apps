//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNetworkInterfaceUtils : NSObject
{
}

+ (id)stringFromAddress6:(struct sockaddr_in6 *)arg1;
+ (id)stringFromAddress4:(struct sockaddr_in *)arg1;
+ (id)getIpAddressesOfRemoteHost:(id)arg1;

@end

