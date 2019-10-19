//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FRepoInfo : NSObject <NSCopying>
{
    _Bool secure;
    NSString *namespace;
    NSString *host;
    NSString *internalHost;
    NSString *domain;
}

@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(readonly, nonatomic) _Bool secure; // @synthesize secure;
@property(retain, nonatomic) NSString *internalHost; // @synthesize internalHost;
@property(readonly, nonatomic) NSString *host; // @synthesize host;
@property(readonly, nonatomic) NSString *namespace; // @synthesize namespace;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)connectionURLWithLastSessionID:(id)arg1;
- (id)connectionURL;
- (_Bool)isCustomHost;
- (_Bool)isDemoHost;
- (void)clearInternalHostCache;
- (id)description;
- (id)initWithHost:(id)arg1 isSecure:(_Bool)arg2 withNamespace:(id)arg3;

@end

