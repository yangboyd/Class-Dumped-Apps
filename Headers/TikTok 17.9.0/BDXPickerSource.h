//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDXPickerSource : NSObject
{
    NSString *_mode;
}

- (void).cxx_destruct;
@property(retain) NSString *mode; // @synthesize mode=_mode;
- (id)valuesRow;
- (id)valueDate;
- (id)endDate;
- (id)startDate;
- (id)stringValueForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (long long)numberOfComponents;

@end

