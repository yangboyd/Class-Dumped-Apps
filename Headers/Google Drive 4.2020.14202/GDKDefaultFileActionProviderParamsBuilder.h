//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKTheme, NSString;

@interface GDKDefaultFileActionProviderParamsBuilder : NSObject
{
    _Bool _reportAbuseDryRunEnabled;
    _Bool _linkSharingToggleEnabled;
    _Bool _blocosWarningsEnabled;
    _Bool _quickShareEnabled;
    _Bool _shortcutCreationEnabled;
    _Bool _dynamicTypeEnabled;
    NSString *_searchPlaceholderText;
    GDKTheme *_theme;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builderWithSearchPlaceholderText:(id)arg1 theme:(id)arg2;
@property(retain, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(nonatomic) _Bool shortcutCreationEnabled; // @synthesize shortcutCreationEnabled=_shortcutCreationEnabled;
@property(nonatomic) _Bool quickShareEnabled; // @synthesize quickShareEnabled=_quickShareEnabled;
@property(nonatomic) _Bool blocosWarningsEnabled; // @synthesize blocosWarningsEnabled=_blocosWarningsEnabled;
@property(nonatomic) _Bool linkSharingToggleEnabled; // @synthesize linkSharingToggleEnabled=_linkSharingToggleEnabled;
@property(nonatomic) _Bool reportAbuseDryRunEnabled; // @synthesize reportAbuseDryRunEnabled=_reportAbuseDryRunEnabled;
@property(copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
- (void).cxx_destruct;
- (id)build;

@end

