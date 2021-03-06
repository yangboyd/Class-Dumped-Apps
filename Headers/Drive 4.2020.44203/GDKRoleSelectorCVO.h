//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOCheckboxContentViewObject.h>

#import "GDKAutoSizable-Protocol.h"

@class GDKPermission, GDKTheme, NSString, UIImage;
@protocol GDKAutoSizablePresenter;

@interface GDKRoleSelectorCVO : GOOCheckboxContentViewObject <GDKAutoSizable>
{
    _Bool _isFolder;
    _Bool _enablesDiscovery;
    _Bool _temakiEnabled;
    _Bool _showsTopDivider;
    _Bool _showsBottomDivider;
    id <GDKAutoSizablePresenter> _autoSizablePresenter;
    GDKPermission *_permission;
    long long _role;
    long long _scope;
    NSString *_disabledReason;
    UIImage *_avatar;
    GDKTheme *_theme;
}

+ (id)objectWithTitle:(id)arg1 image:(id)arg2 temakiEnabled:(_Bool)arg3 showsTopDivider:(_Bool)arg4 showsBottomDivider:(_Bool)arg5 theme:(id)arg6;
+ (id)objectWithPermission:(id)arg1 avatar:(id)arg2 temakiEnabled:(_Bool)arg3 showsTopDivider:(_Bool)arg4 showsBottomDivider:(_Bool)arg5 theme:(id)arg6;
+ (id)objectWithParams:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool showsBottomDivider; // @synthesize showsBottomDivider=_showsBottomDivider;
@property(nonatomic) _Bool showsTopDivider; // @synthesize showsTopDivider=_showsTopDivider;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *disabledReason; // @synthesize disabledReason=_disabledReason;
@property(nonatomic) _Bool temakiEnabled; // @synthesize temakiEnabled=_temakiEnabled;
@property(nonatomic) _Bool enablesDiscovery; // @synthesize enablesDiscovery=_enablesDiscovery;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) GDKPermission *permission; // @synthesize permission=_permission;
@property(readonly, nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder;
@property(nonatomic) __weak id <GDKAutoSizablePresenter> autoSizablePresenter; // @synthesize autoSizablePresenter=_autoSizablePresenter;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long heightCacheHash;
@property(readonly, nonatomic) NSString *heightCacheKey;
- (id)nonBindingContentView;
- (Class)contentViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) Class superclass;

@end

