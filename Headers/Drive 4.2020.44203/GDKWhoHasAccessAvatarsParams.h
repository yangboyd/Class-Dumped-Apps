//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKDomainAttributes, GDKTheme, NSArray;

@interface GDKWhoHasAccessAvatarsParams : NSObject
{
    _Bool _permissions_hazzer;
    NSArray *_avatars_7;
    GDKDomainAttributes *_domainAttributes_16;
    GDKTheme *_theme_5;
    NSArray *_permissions_11;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool permissions_hazzer; // @synthesize permissions_hazzer=_permissions_hazzer;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(readonly, nonatomic) GDKDomainAttributes *domainAttributes; // @synthesize domainAttributes=_domainAttributes_16;
@property(readonly, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars_7;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions_11;
- (id)initWithAvatars:(id)arg1 domainAttributes:(id)arg2 theme:(id)arg3;

@end

