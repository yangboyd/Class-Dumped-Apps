//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>

@class IGUser, NSArray, NSString;

@interface IGProfileChainingModel : NSObject <IGListDiffable>
{
    _Bool _showEmptyStateIndicatorCell;
    _Bool _showSeeAllButton;
    _Bool _showCloseButton;
    _Bool _showSeparators;
    _Bool _deemphasizeActionButton;
    _Bool _hideScrollCollectionViewCell;
    _Bool _isAutoExpandChaining;
    IGUser *_user;
    NSString *_bannerTitle;
    NSArray *_chainingAccounts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isAutoExpandChaining; // @synthesize isAutoExpandChaining=_isAutoExpandChaining;
@property(readonly, nonatomic) _Bool hideScrollCollectionViewCell; // @synthesize hideScrollCollectionViewCell=_hideScrollCollectionViewCell;
@property(readonly, nonatomic) _Bool deemphasizeActionButton; // @synthesize deemphasizeActionButton=_deemphasizeActionButton;
@property(readonly, nonatomic) _Bool showSeparators; // @synthesize showSeparators=_showSeparators;
@property(readonly, nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(readonly, nonatomic) _Bool showSeeAllButton; // @synthesize showSeeAllButton=_showSeeAllButton;
@property(readonly, nonatomic) _Bool showEmptyStateIndicatorCell; // @synthesize showEmptyStateIndicatorCell=_showEmptyStateIndicatorCell;
@property(retain, nonatomic) NSArray *chainingAccounts; // @synthesize chainingAccounts=_chainingAccounts;
@property(readonly, copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 bannerTitle:(id)arg2 chainingAccounts:(id)arg3 options:(unsigned long long)arg4 isAutoExpandChaining:(_Bool)arg5;

@end

