//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAJID.h>

@interface WADomainJID : WAJID
{
    unsigned long long _domain;
}

+ (id)forGroupEndpoint;
+ (id)forUserEndpoint;
- (_Bool)isValid;
- (id)dataRepresentation;
- (unsigned long long)internalDomain;
- (_Bool)isEqualToDomainJID:(id)arg1;
- (id)initWithDomain:(unsigned long long)arg1;
- (id)initFromSubclass;

@end

