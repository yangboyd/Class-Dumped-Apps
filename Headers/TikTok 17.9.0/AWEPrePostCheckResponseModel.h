//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEPrePostCheckResponseModel : AWEBaseApiModel
{
    _Bool _isPassed;
    NSString *_reasonTitle;
    NSString *_reasonBody;
    NSString *_showMsgKey;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *showMsgKey; // @synthesize showMsgKey=_showMsgKey;
@property(copy, nonatomic) NSString *reasonBody; // @synthesize reasonBody=_reasonBody;
@property(copy, nonatomic) NSString *reasonTitle; // @synthesize reasonTitle=_reasonTitle;
@property(nonatomic) _Bool isPassed; // @synthesize isPassed=_isPassed;

@end

