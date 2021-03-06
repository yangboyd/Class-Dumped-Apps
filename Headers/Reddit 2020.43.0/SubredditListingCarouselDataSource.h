//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NetworkCarouselDataSource.h"

@class NSString;

@interface SubredditListingCarouselDataSource : NetworkCarouselDataSource
{
    long long _originalItemCount;
    NSString *_subredditPk;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subredditPk; // @synthesize subredditPk=_subredditPk;
@property(nonatomic) long long originalItemCount; // @synthesize originalItemCount=_originalItemCount;
- (id)cloneDataSourceWithSeeMoreCount:(long long)arg1;
- (_Bool)hasMoreContent;
- (id)carouselItemsFromData:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithURLString:(id)arg1 service:(id)arg2 parameters:(id)arg3 templateContext:(id)arg4 subredditPk:(id)arg5;

@end

