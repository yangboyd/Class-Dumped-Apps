//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUILolomoRequest.h"

@class NSNumber, NSPredicate, NSString;

@interface NFUICustomLolomoRequest : NFUILolomoRequest
{
    NSPredicate *_listPredicate;
    NSNumber *_listTrackId;
    NSString *_pageType;
    NSString *_titleGroupSpecialGalleryTitle;
}

@property(copy, nonatomic) NSString *titleGroupSpecialGalleryTitle; // @synthesize titleGroupSpecialGalleryTitle=_titleGroupSpecialGalleryTitle;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSNumber *listTrackId; // @synthesize listTrackId=_listTrackId;
@property(retain, nonatomic) NSPredicate *listPredicate; // @synthesize listPredicate=_listPredicate;
- (void).cxx_destruct;

@end

