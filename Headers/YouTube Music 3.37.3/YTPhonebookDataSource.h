//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSArray;

@interface YTPhonebookDataSource : NSObject
{
    GIMMe *_gimme;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)contact:(unsigned long long)arg1 inSection:(unsigned long long)arg2;
- (id)contactsInSection:(unsigned long long)arg1;
- (id)section:(unsigned long long)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1 searchText:(id)arg2;
- (id)initWithSectionListRenderers:(id)arg1;

@end

