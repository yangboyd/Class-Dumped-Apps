//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class NSDate;

@interface _TtC15SlackFoundation16MockDateProvider : _TtCs12_SwiftObject
{
    // Error parsing type: , name: simulatedDate
    // Error parsing type: , name: distantFuture
    // Error parsing type: , name: distantPast
}

- (double)currentTimestamp;
- (id)currentDate;
@property(nonatomic, copy) NSDate *distantPast;
@property(nonatomic, copy) NSDate *distantFuture;

@end

