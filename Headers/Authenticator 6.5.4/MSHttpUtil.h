//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSHttpUtil : NSObject
{
}

+ (id)hideSecretInString:(id)arg1 secret:(id)arg2;
+ (id)hideSecret:(id)arg1;
+ (_Bool)isSSLConnectionError:(id)arg1;
+ (_Bool)isNoInternetConnectionError:(id)arg1;
+ (_Bool)isSuccessStatusCode:(long long)arg1;
+ (_Bool)isRecoverableError:(long long)arg1;

@end

