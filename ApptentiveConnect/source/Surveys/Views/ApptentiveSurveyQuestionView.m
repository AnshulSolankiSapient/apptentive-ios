//
//  ApptentiveSurveyQuestionView.m
//  CVSurvey
//
//  Created by Frank Schmitt on 2/23/16.
//  Copyright © 2016 Apptentive, Inc. All rights reserved.
//

#import "ApptentiveSurveyQuestionView.h"


@interface ApptentiveSurveyQuestionView ()

@property (strong, nonatomic) IBOutlet NSLayoutConstraint *separatorViewHeight;

@end


@implementation ApptentiveSurveyQuestionView

- (void)awakeFromNib {
	self.separatorViewHeight.constant = 1.0 / [UIScreen mainScreen].scale;
}

@end
