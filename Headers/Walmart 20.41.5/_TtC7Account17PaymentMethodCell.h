//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIStackView, _TtC10CoreStyles9CoreLabel;

@interface _TtC7Account17PaymentMethodCell : UITableViewCell
{
    // Error parsing type: , name: paymentMethodStackView
    // Error parsing type: , name: headingLabel
    // Error parsing type: , name: cardInfoLabel
    // Error parsing type: , name: pwpInfoLabel
    // Error parsing type: , name: isFirst
    // Error parsing type: , name: isLast
    // Error parsing type: , name: normalPwpAttributes
    // Error parsing type: , name: boldPwpAttributes
}

+ (id)identifier;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateWithOrderPaymentViewModel:(id)arg1 isFirst:(_Bool)arg2 isLast:(_Bool)arg3;
@property(nonatomic) _Bool isLast; // @synthesize isLast;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst;
@property(nonatomic, readonly) _TtC10CoreStyles9CoreLabel *pwpInfoLabel; // @synthesize pwpInfoLabel;
@property(nonatomic, readonly) UILabel *cardInfoLabel; // @synthesize cardInfoLabel;
@property(nonatomic, readonly) UILabel *headingLabel; // @synthesize headingLabel;
@property(nonatomic, readonly) UIStackView *paymentMethodStackView; // @synthesize paymentMethodStackView;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, readonly) NSString *reuseIdentifier;

@end

