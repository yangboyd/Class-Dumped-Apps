//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class NSString;

@interface TikTokMusicMoreSoundsListDataController : AWEListDataController
{
    int _cursor;
    NSString *_musicID;
}

- (void).cxx_destruct;
@property(nonatomic) int cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) NSString *musicID; // @synthesize musicID=_musicID;
- (void)fetchWithCount:(long long)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshWithCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initFetchWithCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMusicID:(id)arg1;

@end

