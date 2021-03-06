//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKBackendInstance, GDKTheme;

@interface GDKPickerUserServicesParams : NSObject
{
    _Bool _updateNativeSupportEnabled_26;
    _Bool _multiParentDeprecationEnabled_29;
    GDKBackendInstance *_backendInstance_15;
    GDKTheme *_theme_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool multiParentDeprecationEnabled; // @synthesize multiParentDeprecationEnabled=_multiParentDeprecationEnabled_29;
@property(readonly, nonatomic) _Bool updateNativeSupportEnabled; // @synthesize updateNativeSupportEnabled=_updateNativeSupportEnabled_26;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme_5;
@property(readonly, nonatomic) GDKBackendInstance *backendInstance; // @synthesize backendInstance=_backendInstance_15;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBackendInstance:(id)arg1 theme:(id)arg2 updateNativeSupportEnabled:(_Bool)arg3 multiParentDeprecationEnabled:(_Bool)arg4;

@end

