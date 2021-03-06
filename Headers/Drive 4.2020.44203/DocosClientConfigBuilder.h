//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DocosClientConfigBuilder : NSObject
{
    _Bool _enableCreateNewButton;
    _Bool _enableViewersCanSeeCommentsWarning;
    _Bool _enableMobileCommentsPE;
    _Bool _enableDarkMode;
    _Bool _enableBottomSheetForTablet;
    _Bool _enableSidebarForTabletLandscape;
    NSString *_userAvatarURLString;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userAvatarURLString; // @synthesize userAvatarURLString=_userAvatarURLString;
@property(nonatomic) _Bool enableSidebarForTabletLandscape; // @synthesize enableSidebarForTabletLandscape=_enableSidebarForTabletLandscape;
@property(nonatomic) _Bool enableBottomSheetForTablet; // @synthesize enableBottomSheetForTablet=_enableBottomSheetForTablet;
@property(nonatomic) _Bool enableDarkMode; // @synthesize enableDarkMode=_enableDarkMode;
@property(nonatomic) _Bool enableMobileCommentsPE; // @synthesize enableMobileCommentsPE=_enableMobileCommentsPE;
@property(nonatomic) _Bool enableViewersCanSeeCommentsWarning; // @synthesize enableViewersCanSeeCommentsWarning=_enableViewersCanSeeCommentsWarning;
@property(nonatomic) _Bool enableCreateNewButton; // @synthesize enableCreateNewButton=_enableCreateNewButton;
- (id)build;

@end

