//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADEumTimeStamp, NSString, NSUUID;

@interface ADEumSessionFrame : NSObject
{
    _Bool _completed;
    ADEumTimeStamp *_startTime;
    NSString *_frameName;
    NSUUID *_frameUuid;
}

@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSUUID *frameUuid; // @synthesize frameUuid=_frameUuid;
@property(retain, nonatomic) NSString *frameName; // @synthesize frameName=_frameName;
@property(retain, nonatomic) ADEumTimeStamp *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)uuidString;
- (id)name;
- (void)end;
- (void)updateName:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end

