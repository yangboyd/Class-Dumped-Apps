//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PostActionSheetConfiguration : NSObject
{
    _Bool _shouldShowNewsUnfollow;
    _Bool _shouldShowSaveItem;
    _Bool _shouldShowFlairItem;
    _Bool _shouldShowGiveAwardItem;
    NSString *_newsSubtopicTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowGiveAwardItem; // @synthesize shouldShowGiveAwardItem=_shouldShowGiveAwardItem;
@property(nonatomic) _Bool shouldShowFlairItem; // @synthesize shouldShowFlairItem=_shouldShowFlairItem;
@property(nonatomic) _Bool shouldShowSaveItem; // @synthesize shouldShowSaveItem=_shouldShowSaveItem;
@property(retain, nonatomic) NSString *newsSubtopicTitle; // @synthesize newsSubtopicTitle=_newsSubtopicTitle;
@property(nonatomic) _Bool shouldShowNewsUnfollow; // @synthesize shouldShowNewsUnfollow=_shouldShowNewsUnfollow;
- (id)init;

@end

