//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

#import "GDKAutoSizable-Protocol.h"
#import "GDKShareUserCVOProtocol-Protocol.h"

@class GDKPermission, GDKTheme, NSString, NSURL, UIImage;
@protocol GDKAutoSizablePresenter, GDKContact, GDKShareUserCVODelegate, GDKShareUserCVOUpdateDelegate, MDCTypographyScheming><GDKTypographySchemingAdditions;

@interface GDKShareUserCVO : GOOBaseContentViewObject <GDKAutoSizable, GDKShareUserCVOProtocol>
{
    _Bool updating;
    _Bool _enabled;
    _Bool _usePermissionImages;
    _Bool _dynamicTypeEnabled;
    _Bool _allowsChange;
    id <GDKShareUserCVODelegate> delegate;
    id <GDKShareUserCVOUpdateDelegate> updateDelegate;
    GDKPermission *permission;
    UIImage *_avatar;
    id <GDKAutoSizablePresenter> _autoSizablePresenter;
    id <GDKContact> _contact;
    NSString *_title;
    NSString *_subtitle;
    NSString *_metadata;
    NSURL *_avatarURL;
    NSString *_warningText;
    GDKTheme *_theme;
}

+ (id)objectWithPermission:(id)arg1 contact:(id)arg2 disabledText:(id)arg3 theme:(id)arg4;
+ (id)objectWithPermission:(id)arg1 contact:(id)arg2 theme:(id)arg3;
+ (id)objectWithTitle:(id)arg1 subtitle:(id)arg2 metadata:(id)arg3 avatarURL:(id)arg4 permission:(id)arg5 allowsChange:(_Bool)arg6 warningText:(id)arg7 theme:(id)arg8;
- (void).cxx_destruct;
@property(retain, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(nonatomic) _Bool allowsChange; // @synthesize allowsChange=_allowsChange;
@property(retain, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id <GDKContact> contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(nonatomic) _Bool usePermissionImages; // @synthesize usePermissionImages=_usePermissionImages;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <GDKAutoSizablePresenter> autoSizablePresenter; // @synthesize autoSizablePresenter=_autoSizablePresenter;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) GDKPermission *permission; // @synthesize permission;
@property(nonatomic) __weak id <GDKShareUserCVOUpdateDelegate> updateDelegate; // @synthesize updateDelegate;
@property(nonatomic) __weak id <GDKShareUserCVODelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) unsigned long long heightCacheHash;
@property(readonly, nonatomic) NSString *heightCacheKey;
- (id)nonBindingContentView;
@property(readonly, nonatomic) id <MDCTypographyScheming><GDKTypographySchemingAdditions> typographyScheme;
@property(readonly, nonatomic) _Bool isAccessibilityCategory;
- (void)setAvatar:(id)arg1 animated:(_Bool)arg2;
- (Class)contentViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

